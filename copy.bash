#!/bin/bash -e

## This file lets it's user to copy tests from the specified
## `chapter` from it's desktop. You may have to change the
## `EPITECH_CPOOL_LOCATION` below to make it matching the
## path where your EPITECH C pool is located.

EPITECH_CPOOL_LOCATION=~/Desktop/epitech

function usage {
    echo "Usage :"
    echo "${0} <chapter>"
    echo "Error : ${1}"
}

function build_src {
    echo $EPITECH_CPOOL_LOCATION/$1
}

function check_arguments {
    local SOURCE=$(build_src "${1}")

    if [[ ! -d "${EPITECH_CPOOL_LOCATION}" ]]; then
        usage "you have to change the EPITECH_CPOOL_LOCATION's value. Current : '${EPITECH_CPOOL_LOCATION}'"
        exit 1
    fi
    if [[ "${1}" = "" ]]; then
        usage "no chapter provided."
        exit 1
    fi
    if [[ ! -d "${SOURCE}" ]]; then
        usage "invalid chapter provided. '${1}'"
        exit 1
    fi
}

function handle_tests {
    local CHAPTER="${1}"
    local DAY="${2}"
    local SOURCE=$(build_src "${CHAPTER}")

    mkdir -p "${CHAPTER}/${d}"
    cp "${SOURCE}/${d}tests/"*.c "${CHAPTER}/${d}"
}

function main {
    local CHAPTER="${1}"
    local SOURCE=$(build_src "${CHAPTER}")

    check_arguments "${@}"
    rm -rf "${CHAPTER}"
    for d in $(ls -p "${SOURCE}" | grep '/'); do
        if [[ -d "${SOURCE}/${d}tests" ]]; then
            handle_tests "${CHAPTER}" "${d}"
        fi
    done
    exit 0
}

main "${@}"

