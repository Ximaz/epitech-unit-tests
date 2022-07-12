#!/bin/bash -e

function usage {
    echo "Usage :"
    echo "${0} <chapter>"
    echo "Error : ${1}"
}

function main {
    local CHAPTER="${1}"
    local SOURCE=~/Desktop/epitech/$CHAPTER

    if [[ "${CHAPTER}" = "" ]]; then
        usage "no chapter provided."
        exit 1
    else
        if [[ ! -d "${SOURCE}" ]]; then
            usage "invalid chapter provided. '${CHAPTER}'"
            exit 1
        fi
    fi
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

