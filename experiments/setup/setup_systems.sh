#!/bin/bash

DIR=`dirname $0`

/bin/bash $DIR/neurallp.sh

#/bin/bash $DIR/ntp.sh

#/bin/bash $DIR/mitibm.sh


#Amiep

rm -rf $DIR/../systems/amiep
mkdir $DIR/../systems/amiep
wget -O $DIR/../systems/amiep/amie_plus.jar https://www.dropbox.com/s/b59so58aede9kjd/amie_plus.jar?dl=1