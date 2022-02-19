#!/bin/sh
ifconfig -a | grep ether | sed -e 's/ *ether//;' -e 's/^ //g;'