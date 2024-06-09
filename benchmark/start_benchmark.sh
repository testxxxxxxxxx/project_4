#!/bin/bash

set -ueo pipefail

result=""

function main()
{
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/11)"
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/13)" 
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/16)" 
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/17)"
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/18)"
    $result="$(../target/debug/project_4 --hamilton < ./benchmark_data/19)"    

}

main $result