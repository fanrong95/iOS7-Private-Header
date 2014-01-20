/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface RadiosPreferences : NSObject

{

    struct __SCPreferences *_prefs;

    int _applySkipCount;

    id <RadiosPreferencesDelegate> _delegate;

    _Bool _isCachedAirplaneModeValid;

    _Bool _cachedAirplaneMode;

    _Bool notifyForExternalChangeOnly;

}



@property(nonatomic) _Bool airplaneMode;

- (void)dealloc;

@property(nonatomic) id <RadiosPreferencesDelegate> delegate; // @synthesize delegate=_delegate;

- (void *)getValueForKey:(id)arg1;

- (id)init;

- (void)initializeSCPrefs:(id)arg1;

@property(nonatomic) _Bool notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;

- (void)notifyTarget:(unsigned int)arg1;

- (void)refresh;

- (oneway void)release;

- (void)setCallback:(void *)arg1 withContext:(CDStruct_e097db04 *)arg2;

- (void)setValue:(void *)arg1 forKey:(id)arg2;

- (void)synchronize;



@end


