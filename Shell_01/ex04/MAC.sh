#!/bin/bash

ifconfig -a link | grep -ioE '([a-z0-9]{2}:){5}..'
