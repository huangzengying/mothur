#ifndef LISTSEQSCOMMAND_H
#define LISTSEQSCOMMAND_H

/*
 *  listseqscommand.h
 *  Mothur
 *
 *  Created by Sarah Westcott on 7/8/09.
 *  Copyright 2009 Schloss Lab UMASS Amherst. All rights reserved.
 *
 */

#include "command.hpp"

class ListSeqsCommand : public Command {
	
	public:
	
		ListSeqsCommand(string);
		ListSeqsCommand();	
		~ListSeqsCommand(){}
	
		vector<string> setParameters();
		string getCommandName()			{ return "list.seqs";				}
		string getCommandCategory()		{ return "Sequence Processing";		}
		
        string getHelpString();	
        string getOutputPattern(string);
		string getCitation() { return "http://www.mothur.org/wiki/List.seqs"; }
		string getDescription()		{ return "lists sequences from a list, fasta, name, group, count, fastq, taxonomy, alignreport or contigsreport file"; }

		int execute(); 
		void help() { m->mothurOut(getHelpString()); }	
	
	
	private:
		vector<string> names, outputNames;
		string fastafile, namefile, groupfile, countfile, alignfile, inputFileName, outputDir, listfile, taxfile, fastqfile, format, contigsreportfile;
		bool abort;
		
		void readFasta();
		void readName();
		void readGroup();
		void readAlign();
        void readContigs();
		void readList();
		void readTax();
        void readCount();
        void readFastq();
};

#endif

