/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSString;



__attribute__((visibility("hidden")))

@interface TSTTemporaryCollectionNode : NSObject

{

    struct TSCEVectorIndexPair mDimensions;

    NSMutableArray *mChildren;

    NSString *mWhitespaceBeforeFirstChild;

    NSMutableArray *mWhitespaceAfterDelimiters;

    unsigned long long mFirstIndex;

    unsigned long long mLastIndex;

}



- (id).cxx_construct;

@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=mChildren;

- (void)dealloc;

@property(nonatomic) struct TSCEVectorIndexPair dimensions; // @synthesize dimensions=mDimensions;

@property(nonatomic) unsigned long long firstIndex; // @synthesize firstIndex=mFirstIndex;

- (id)init;

@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=mLastIndex;

@property(retain, nonatomic) NSMutableArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=mWhitespaceAfterDelimiters;

@property(retain, nonatomic) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=mWhitespaceBeforeFirstChild;



@end


