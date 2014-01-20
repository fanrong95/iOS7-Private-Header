/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "_UISettingsGroupObserver.h"

#import "_UISettingsKeyPathObserver.h"



@class NSDictionary, NSHashTable, NSSet;



@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying>

{

    NSHashTable *_internal_keyObservers;

    NSHashTable *_internal_keyPathObservers;

    NSSet *_internal_childKeys;

    NSSet *_internal_leafKeys;

    NSDictionary *_internal_keyClasses;

    NSDictionary *_internal_keyStructs;

    _Bool _internal_isObservingPropertiesAndChildren;

}



+ (id)settingsFromArchiveDictionary:(id)arg1;

+ (id)settingsFromArchiveFile:(id)arg1 error:(id *)arg2;

- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;

- (id)_allKeys;

- (id)_colorForKey:(id)arg1 fromDictionary:(id)arg2;

- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;

- (void)_continueInitBySettingDefaultValues;

- (id)_dictionaryForColorKey:(id)arg1;

- (id)_dictionaryForFontKey:(id)arg1;

- (id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2;

- (id)_fontForKey:(id)arg1 fromDictionary:(id)arg2;

- (void)_handleChildGroupChange:(id)arg1;

- (_Bool)_hasObservers;

- (id)_initWithArchiveDictionary:(id)arg1;

- (void)_introspectKeys;

- (_Bool)_isObservingPropertiesAndChildren;

- (id)_keyForChild:(id)arg1;

- (void)_sendKeyChanged:(id)arg1;

- (void)_sendKeyPathChanged:(id)arg1;

- (id)_startInit;

- (void)_startObservingChild:(id)arg1;

- (void)_startObservingPropertiesAndChildren;

- (void)_startOrStopObservingPropertiesAndChildren;

- (void)_stopObservingChild:(id)arg1;

- (void)_stopObservingPropertiesAndChildren;

- (id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3;

- (void)addKeyObserver:(id)arg1;

- (void)addKeyPathObserver:(id)arg1;

- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;

- (id)archiveDictionary;

- (_Bool)archiveToFile:(id)arg1 error:(id *)arg2;

- (id)archiveValueForKey:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithDefaultValues;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (void)removeKeyObserver:(id)arg1;

- (void)removeKeyPathObserver:(id)arg1;

- (void)restoreDefaultValues;

- (void)restoreFromArchiveDictionary:(id)arg1;

- (_Bool)restoreFromArchiveFile:(id)arg1 error:(id *)arg2;

- (void)setDefaultValues;

- (void)setValuesFromModel:(id)arg1;

- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;

- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;

- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;



@end


