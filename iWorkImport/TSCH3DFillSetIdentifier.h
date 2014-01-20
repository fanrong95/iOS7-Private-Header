/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface TSCH3DFillSetIdentifier : NSObject

{

    NSString *mTextureSetID;

    unsigned long long mSeriesIndex;

    int mFillPropertyType;

}



+ (id)identifierWithContentsOfDictionary:(id)arg1;

+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;

+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;

+ (id)instanceWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;

+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;

- (unsigned long long)countOfSeriesInFillSet;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (int)fillPropertyTypeFromName:(id)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithContentsOfDictionary:(id)arg1;

- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;

- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isSageCompatible;

- (_Bool)isStoredInLocalBundle;

- (id)loadPropertiesDictionary;

- (id)localDirectoryPath;

- (id)p_getPlist;

- (id)p_loadPlist;

- (id)p_plistData;

- (id)p_plistPath;

- (id)p_sageFillPropertyNames;

- (id)p_sageFillSetList;

- (id)p_sageSeriesNames;

- (id)p_version;

- (id)sageFillName;

- (id)sageSeriesName;

- (void)saveToArchive:(struct Chart3DFillArchive *)arg1 archiver:(id)arg2;

@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;

- (unsigned long long)seriesIndexFromSageSeriesName:(id)arg1;

@property(readonly, nonatomic) NSString *textureSetFilename;

@property(readonly, nonatomic) NSString *textureSetID; // @synthesize textureSetID=mTextureSetID;



@end


