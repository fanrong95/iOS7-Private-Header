/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSPUnarchiverDelegate <NSObject>

- (id)dataForIdentifier:(long long)arg1;

@property(readonly, nonatomic) _Bool didFinishResolvingReferences;

@property(readonly, nonatomic) _Bool documentHasCurrentFileFormatVersion;

- (void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(_Bool *)arg3;



@optional

@property(readonly, nonatomic) _Bool isCrossAppPaste;

@property(readonly, nonatomic) _Bool isCrossDocumentPaste;

@property(readonly, nonatomic) _Bool isFromPasteboard;

@end


