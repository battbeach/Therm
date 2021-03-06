//
//  PseudoTerminal+TouchBar.h
//  iTerm2
//
//  Created by George Nachman on 2/20/17.
//
//

#import "PseudoTerminal.h"

@interface PseudoTerminal (TouchBar) <
    NSCandidateListTouchBarItemDelegate,
    NSTouchBarDelegate,
    NSScrubberDelegate,
    NSScrubberDataSource>

- (void)updateTouchBarIfNeeded;
- (void)updateTouchBarFunctionKeyLabels;
- (void)updateTouchBarWithWordAtCursor:(NSString *)word withTitle:(NSString *)title;

@end
