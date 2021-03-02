#Little hacky Tool that creates an directory with the contest name and the for the contest implemented Template

import os 
import argparse

parser = argparse.ArgumentParser(description="Build Contest Preset")
#parser.add_argument('-name', type=string, help="Name of the contest")
parser.add_argument('--count', help="How many Presets will be generated", type=int)
#parser.add_argument('--temp', type=string, help="Define the Template")
args = parser.parse_args()

CONTEST_FOLDER_PATH = '/home/jule/cp-contests/contest/'



#This is all very ugly needs refactoring but it works for now 
os.makedirs(CONTEST_FOLDER_PATH + '{}'.format(args.count))











