#!/bin/bash

find . -name \*.sh -print | xargs  basename -a -s .sh
