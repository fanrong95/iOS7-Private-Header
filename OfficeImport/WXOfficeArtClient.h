/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OAXClient.h"


__attribute__((visibility("hidden")))

@interface WXOfficeArtClient : OAXClient

{

}



- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;

- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;

- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;

- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;



@end


