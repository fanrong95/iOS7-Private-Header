/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "OAVClient.h"



__attribute__((visibility("hidden")))

@interface EXVmlClient : NSObject <OAVClient>

{

}



+ (id)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;

+ (void)readAnchor:(struct _xmlNode *)arg1 to:(id)arg2;

+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;

+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;

+ (id)readComment:(struct _xmlNode *)arg1 to:(id)arg2;

+ (int)vmlSupportLevel;



@end


