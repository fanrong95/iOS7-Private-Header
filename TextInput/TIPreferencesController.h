/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSTimer;



@interface TIPreferencesController : NSObject

{

    NSTimer *_synchronizePreferencesTimer;

    _Bool dontSynchronizePreferences;

    _Bool isInternalInstall;

}



+ (id)sharedPreferencesController;

- (_Bool)boolForKey:(int)arg1;

- (void)clearSynchronizePreferencesTimer;

- (void)dealloc;

- (id)defaultForKey:(int)arg1;

- (CDStruct_5072e809 *)domainForType:(int)arg1;

- (CDStruct_5072e809 *)domains;

@property(nonatomic) _Bool dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;

- (id)init;

@property(nonatomic) _Bool isInternalInstall; // @synthesize isInternalInstall;

- (CDStruct_982099be *)preferences;

- (void)preferencesChangedCallback:(id)arg1;

- (void)releaseDontSynchronizePreferences;

- (void)setValue:(id)arg1 forKey:(int)arg2;

- (void)synchronizePreferences;

- (void)touchSynchronizePreferencesTimer;

- (id)valueForKey:(int)arg1;



@end


