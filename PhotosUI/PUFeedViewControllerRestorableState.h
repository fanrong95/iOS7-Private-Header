/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSArray, NSDate, NSURL;



@interface PUFeedViewControllerRestorableState : NSObject <NSCoding>

{

    _Bool _scrolledToNewest;

    NSDate *_date;

    long long _interfaceOrientation;

    NSArray *_centerAssetUUIDs;

    NSArray *_centerAssetFrames;

    NSURL *_centerSectionEntryURIRepresentation;

    struct CGRect _centerSectionFrame;

}



- (void).cxx_destruct;

@property(copy, nonatomic) NSArray *centerAssetFrames; // @synthesize centerAssetFrames=_centerAssetFrames;

@property(copy, nonatomic) NSArray *centerAssetUUIDs; // @synthesize centerAssetUUIDs=_centerAssetUUIDs;

@property(copy, nonatomic) NSURL *centerSectionEntryURIRepresentation; // @synthesize centerSectionEntryURIRepresentation=_centerSectionEntryURIRepresentation;

@property(nonatomic) struct CGRect centerSectionFrame; // @synthesize centerSectionFrame=_centerSectionFrame;

@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;

@property(nonatomic) _Bool scrolledToNewest; // @synthesize scrolledToNewest=_scrolledToNewest;



@end


