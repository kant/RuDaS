#!/bin/bash

DIR=`dirname $0`
SYSDIR=$DIR/../systems
DATA=$DIR/../data/simple-owa/

for NAME in NN-XS-1 NN-S-2-1 NN-S-2-2

do
SYSTEM=Neural-LP

source activate $SYSTEM
python $SYSDIR/$SYSTEM/src/main.py --datadir=$DATA/$SYSTEM/$NAME --exps_dir=$DIR/../output/simple-owa/$SYSTEM --exp_name=$NAME > $DIR/../output/simple-owa/$SYSTEM/$NAME/log.txt

SYSTEM=ntp

#source activate $SYSTEM

#export PYTHONPATH=$PYTHONPATH:$SYSDIR/$SYSTEM
#python $SYSDIR/$SYSTEM/ntp/experiments/learn.py $DATA/$SYSTEM/$NAME/run.conf > $DIR/../output/simple-owa/$SYSTEM/$NAME/log.txt

#SYSTEM=amiep

#java -jar $SYSDIR/$SYSTEM/amie_plus.jar -mins 3 -minis 3 -minpca 0.25 -oute  $DATA/$SYSTEM/$NAME/train.txt > $DIR/../output/simple-owa/$SYSTEM/$NAME/results.txt

done

exit 0
