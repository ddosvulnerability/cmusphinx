package edu.cmu.sphinx.tools.corpus;

import java.io.IOException;

/**
 * Copyright 1999-2006 Carnegie Mellon University.
 * Portions Copyright 2002 Sun Microsystems, Inc.
 * Portions Copyright 2002 Mitsubishi Electric Research Laboratories.
 * All Rights Reserved.  Use is subject to license terms.
 * <p/>
 * See the file "license.terms" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL
 * WARRANTIES.
 * <p/>
 * User: Peter Wolf
 * Date: Apr 2, 2006
 * Time: 7:16:54 PM
 */
public interface CorpusWriter {
    public void write( Corpus corpus ) throws IOException;
}
