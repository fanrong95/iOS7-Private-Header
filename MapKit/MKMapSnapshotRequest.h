/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;



__attribute__((visibility("hidden")))

@interface MKMapSnapshotRequest : NSObject

{

    id _requester;

    id _context;

    CDStruct_2c43369c _coordinate;

    unsigned long long _zoomLevel;

    struct CGSize _size;

    UIImage *_image;

    NSString *_attributionString;

    MKMapSnapshotCreator *_delegate;

    VKMapSnapshotCreator *_snapshotCreator;

}



@property(retain, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;

- (void)cancel;

@property(retain, nonatomic) id context; // @synthesize context=_context;

@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;

- (void)dealloc;

@property(nonatomic) MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;

- (id)description;

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;

@property(retain, nonatomic) id requester; // @synthesize requester=_requester;

@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@property(nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void)start;



@end


