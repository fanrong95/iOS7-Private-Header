/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class OADGraphicProperties;



__attribute__((visibility("hidden")))

@interface CHDMarker : NSObject

{

    unsigned int mSize;

    int mStyle;

    OADGraphicProperties *mGraphicProperties;

}



- (void)dealloc;

- (id)graphicProperties;

- (id)init;

- (void)setGraphicProperties:(id)arg1;

- (void)setSize:(unsigned int)arg1;

- (void)setStyle:(int)arg1;

- (unsigned int)size;

- (int)style;



@end


