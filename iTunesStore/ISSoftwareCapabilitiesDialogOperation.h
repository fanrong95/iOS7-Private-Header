/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISOperation.h"


@class NSDictionary;



@interface ISSoftwareCapabilitiesDialogOperation : ISOperation

{

    NSDictionary *_mismatches;

    id _requiredCapabilities;

}



- (void)_postDefaultDialog;

- (void)dealloc;

- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;

@property(readonly) NSDictionary *mismatches;

@property(readonly) id requiredCapabilities;

- (void)run;



@end

