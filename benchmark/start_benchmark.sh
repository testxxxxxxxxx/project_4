#!/bin/bash

set -ueo pipefail

result=""

function main()
{
    ../target/debug/project_4 --hamilton < ./benchmark_data/1
    ../target/debug/project_4 --hamilton < ./benchmark_data/2 
    ../target/debug/project_4 --hamilton < ./benchmark_data/3 
    ../target/debug/project_4 --hamilton < ./benchmark_data/4
    ../target/debug/project_4 --hamilton < ./benchmark_data/5
    ../target/debug/project_4 --hamilton < ./benchmark_data/6
    ../target/debug/project_4 --hamilton < ./benchmark_data/6_5
    ../target/debug/project_4 --hamilton < ./benchmark_data/6_6
    ../target/debug/project_4 --hamilton < ./benchmark_data/6_7   

}

main $result