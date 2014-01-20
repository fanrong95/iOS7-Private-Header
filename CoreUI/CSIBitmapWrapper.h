/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



@interface CSIBitmapWrapper : NSObject

{

    struct CGContext *_bitmap;

    NSData *_pixelData;

}



- (struct CGContext *)bitmapContext;

- (id)compressedData;

- (void)dealloc;

- (void)finalize;

- (_Bool)getCompressedData:(id *)arg1 usedEncoding:(int *)arg2;

- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

- (id)pixelData;



@end


