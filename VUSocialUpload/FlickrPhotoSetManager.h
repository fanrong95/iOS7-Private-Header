/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "FlickrRequest.h"


@class NSArray;



@interface FlickrPhotoSetManager : FlickrRequest

{

    id <FlickrComposeOptionViewDelegate> _delegate;

    id <FlickrPhotoSetTableDelegate> _tableDelegate;

    NSArray *_photoSets;

}



@property(nonatomic) id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSArray *photoSets; // @synthesize photoSets=_photoSets;

- (void)refreshPhotoSets;

@property(nonatomic) id <FlickrPhotoSetTableDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;



@end


