/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"


@class NSMutableSet;



@interface CoreDAVSupportedReportSetItem : CoreDAVItem

{

    NSMutableSet *_supportedReports;

}



+ (id)copyParseRules;

- (void)addSupportedReport:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

@property(retain) NSMutableSet *supportedReports; // @synthesize supportedReports=_supportedReports;

- (_Bool)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;



@end


