/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCache;



@interface _MFTableCellAttributesCache : NSObject

{

    NSCache *_attributesCache;

}



+ (id)sharedInstance;

- (void)_didReceiveFontSizeChangeNotification:(id)arg1;

- (id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(id)arg2;

- (void)dealloc;

- (id)init;



@end


