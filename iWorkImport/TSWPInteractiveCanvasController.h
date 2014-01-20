/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDInteractiveCanvasController.h"


__attribute__((visibility("hidden")))

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController

{

    _Bool _isTearingDown;

    _Bool _isEditingText;

}



- (_Bool)cellCommentsAllowedForTableInfo:(id)arg1;

- (void)closeHyperlinkPopover;

- (id)closestRepToPoint:(struct CGPoint)arg1 forStorage:(id)arg2;

- (void)dealloc;

- (void)didBeginEditingText;

- (void)getColumnLeftPosition:(double *)arg1 columnRightPosition:(double *)arg2;

- (void)getColumnLeftPosition:(double *)arg1 columnRightPosition:(double *)arg2 singleColumnAtSelectionPoint:(_Bool)arg3;

@property(readonly, nonatomic) _Bool handleHyperlinksWithTextGRs;

- (_Bool)hyperlinkPopoverIsShown;

- (id)infosToHideForCanvas:(id)arg1;

@property(readonly, nonatomic) _Bool isEditingText; // @synthesize isEditingText=_isEditingText;

@property(readonly, nonatomic) _Bool isTearingDown; // @synthesize isTearingDown=_isTearingDown;

- (void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3;

- (id)p_repsForStorage:(id)arg1;

- (struct CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;

- (void)setShowsComments:(_Bool)arg1;

@property(readonly, nonatomic) _Bool shouldRespondToTextHyperlinks;

- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(_Bool)arg4 pinned:(_Bool)arg5;

- (void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(_Bool)arg3;

- (_Bool)showsComments;

- (void)teardown;

- (_Bool)textRepsShouldTileAggressively;

- (void)willEndEditingText;

- (void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(id)arg3;



@end


