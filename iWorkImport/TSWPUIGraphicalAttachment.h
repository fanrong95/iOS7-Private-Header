/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPAttachment.h"


__attribute__((visibility("hidden")))

@interface TSWPUIGraphicalAttachment : TSWPAttachment

{

}



@property(readonly, nonatomic) double baselineOffset;

- (int)elementKind;

- (id)initFromArchive:(const struct UIGraphicalAttachment *)arg1 unarchiver:(id)arg2;

- (id)initFromUnarchiver:(id)arg1;

- (void)invalidate;

- (id)rendererForAttachment;

- (void)saveToArchive:(struct UIGraphicalAttachment *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) struct CGSize size;

- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;



@end


