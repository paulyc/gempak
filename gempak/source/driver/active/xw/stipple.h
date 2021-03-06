/************************************************************************
 * stipple.h								*
 *									*
 * This include file defines the stippled fill patterns.		*
 *									*
 **									*
 * Log:									*
 * S. Jacobs/NMC	 3/98						*
 * m.gamazaychikov/SAIC 01/03   Removed def of NPATFL and changed       *
 *                              NPATFL to NFILLPAT in array dimension   *
 ***********************************************************************/

#define STIPPLE_WIDTH 16
#define STIPPLE_HEIGHT 16

static unsigned char stipple_bits[NFILLPAT][41] = {
	    { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	      0xff, 0xff, 0xff, 0xff, 0xff },
	    { 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x00,
	      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
	      0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x00, 0x00, 0x00,
	      0x00, 0x00, 0x00, 0x00, 0x00 },
	    { 0x00, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 0x00,
	      0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x01, 0x80, 0x00,
	      0x40, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04,
	      0x00, 0x02, 0x00, 0x01, 0x00 },
            { 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 
              0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x80, 0x80,
              0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04,
              0x04, 0x02, 0x02, 0x01, 0x01 },
            { 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 
              0x80, 0x00, 0x80, 0x00, 0x80, 0x80, 0xff, 0x80, 0x00, 
              0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
              0x00, 0x80, 0x00, 0xff, 0x00 },
            { 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00, 
              0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 
              0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00, 0x00, 0x07, 
              0x07, 0x07, 0x07, 0x07, 0x07 },
            { 0x88, 0x88, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x88,
              0x88, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x88, 0x88,
              0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x88, 0x88, 0x44,
              0x44, 0x22, 0x22, 0x11, 0x11 }
	};

