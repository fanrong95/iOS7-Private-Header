/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WFLSMMap;



__attribute__((visibility("hidden")))

@interface WFJudge : NSObject

{

    WFLSMMap *map;

}



+ (id)defaultJudge;

+ (id)defaultLSMMapPath;

- (id)_pronounceOnWebpage:(id)arg1;

- (id)initWithMap:(id)arg1;

- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id *)arg3 pageTitle:(id *)arg4;

- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id *)arg4 pageTitle:(id *)arg5;

- (id)pronounceOnWebpage:(id)arg1;



@end


