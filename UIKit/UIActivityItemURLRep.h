/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSURL, UIImage;



__attribute__((visibility("hidden")))

@interface UIActivityItemURLRep : NSObject

{

    int _attachmentURLType;

    NSURL *_URL;

    UIImage *_thumbnail;

}



@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;

@property(nonatomic) int attachmentURLType; // @synthesize attachmentURLType=_attachmentURLType;

- (void)dealloc;

- (_Bool)isFileURL;

- (id)scheme;

@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;



@end


