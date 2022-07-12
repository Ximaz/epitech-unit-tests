#!/bin/bash -e

function usage {
    echo "Usage :"
    echo "${0} <chapter>"
    echo "Error : ${1}"
}

function build_src {
    Echo ~/Desktop/epitech/$1
}

function check_arguments {
    local SOURCE=$(build_src "${1}")

    if [[ "${1}" = "" ]]; then
        usage "no chapter provided."
        exit 1
    fi
    if [[ ! -d "${SOURCE}" ]]; then
        usage "invalid chapter provided. '${1}'"
        exit 1
    fi
}

function main {
    local CHAPTER="${1}"
    local SOURCE=$(build_src "${CHAPTER}")

    check_arguments "${@}"
    rm -rf "${CHAPTER}"
    for d in $(ls -p "${SOURCE}" | grep '/'); do
        if [[ -d "${SOURCE}/${d}tests" ]]; then
            mkdir -p "${CHAPTER}/${d}"
            cp "${SOURCE}/${d}tests/"*.c "${CHAPTER}/${d}"
        fi
    done
    exit 0
}

main "${@}"

