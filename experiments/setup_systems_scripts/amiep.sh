#!/bin/bash

DIR=`dirname $0`
SYSDIR=$DIR/../systems/amiep

rm -rf $DIR/../systems/amiep
mkdir $DIR/../systems/amiep
wget -O $DIR/../systems/amiep/amie_plus.jar https://www.dropbox.com/s/b59so58aede9kjd/amie_plus.jar?dl=1