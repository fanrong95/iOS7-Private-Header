/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPStorageStyler : NSObject

{

    TSWPStorage *_storage;

    int _attributeArrayKind;

}



- (void)applyStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2;

- (void)performStylingInRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange)arg2;

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;



@end

