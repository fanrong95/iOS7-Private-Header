/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, TSDImageProvider, TSPObjectContext;



__attribute__((visibility("hidden")))

@interface TSDImageResamplingOperation : NSObject

{

    TSDImageProvider *mImageProvider;

    struct CGSize mDesiredSize;

    NSString *mDisplayName;

    struct CGPath *mMaskingPath;

    TSPObjectContext *mObjectContext;

}



- (void)dealloc;

@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;

@property(retain, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;

- (id)init;

- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;

@property(nonatomic) struct CGPath *maskingPath; // @synthesize maskingPath=mMaskingPath;

@property(retain, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;

- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;



@end


