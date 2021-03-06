/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UITextSelection, UIWebDocumentView;



__attribute__((visibility("hidden")))

@interface UIWebSelection : NSObject

{

    UIWebDocumentView *_documentView;

    id <UIWebSelectionBlock> _base;

    id <UIWebSelectionBlock> _extent;

    struct CGSize _desiredSize;

    UITextSelection *_textSelection;

}



- (void)adjustSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;

- (void)applySelectionToWebDocumentView;

- (id)asDomRange;

@property(retain, nonatomic) id <UIWebSelectionBlock> base; // @synthesize base=_base;

- (id)blockAtPoint:(struct CGPoint)arg1;

- (_Bool)blockContainsPoint:(struct CGPoint)arg1;

- (id)blockOfSameWidthAtPoint:(struct CGPoint)arg1;

@property(readonly, nonatomic) struct CGRect boundingRect; // @dynamic boundingRect;

- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;

- (struct CGRect)boundingTextSelectionRect;

- (struct CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;

- (double)distanceBetweenFirstRect:(struct CGRect)arg1 second:(struct CGRect)arg2 edge:(int)arg3;

@property(readonly, nonatomic) UIWebDocumentView *documentView; // @synthesize documentView=_documentView;

- (id)domDocument;

- (id)duplicate;

- (id)elementAtPoint:(struct CGPoint)arg1;

@property(retain, nonatomic) id <UIWebSelectionBlock> extent; // @synthesize extent=_extent;

- (void)growFromEdge:(int)arg1;

- (void)growSelectionTowardsPoint:(struct CGPoint)arg1;

- (id)initWithDocumentView:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToSelection:(id)arg1;

@property(readonly, nonatomic, getter=isTextOnly) _Bool textOnly;

- (void)moveEdge:(int)arg1 outwards:(_Bool)arg2;

- (void)selectionChanged;

- (void)setSelectionWithPoint:(struct CGPoint)arg1;

- (void)setSelectionWithPoint:(struct CGPoint)arg1 ignoringLargeBlocks:(_Bool)arg2;

- (void)shrinkFromEdge:(int)arg1;

- (void)shrinkSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;

- (id)textRepresentation;

@property(readonly, nonatomic) UITextSelection *textSelection; // @synthesize textSelection=_textSelection;

- (id)textSelectionRects;

- (_Bool)tryToShrinkToBaseAndExtent;

- (void)useBlock;

@property(readonly, nonatomic) _Bool valid;

- (id)webArchive;

- (id)webFrame;

- (id)webView;



@end


