/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



__attribute__((visibility("hidden")))

@interface _UIDictionaryManager : NSObject

{

    NSArray *_availableDefinitionDictionaries;

}



+ (id)_filteredDictionaryIDs;

+ (id)assetManager;

+ (void)initialize;

- (id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(_Bool)arg1;

- (id)_availableDictionaryAssets;

- (id)_availableDictionaryAssetsUsingRemoteInfo:(_Bool)arg1;

- (id)_currentlyAvailableDefinitionDictionaries;

- (id)_definitionValuesForTerm:(id)arg1;

- (_Bool)_hasDefinitionForTerm:(id)arg1;

@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;

- (void)dealloc;

- (id)init;



@end


