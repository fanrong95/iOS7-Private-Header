/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKDocumentRoot.h"


#import "TSKImportExportDelegate.h"



@class NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSAFunctionBrowserState, TSCECalculationEngine, TSKViewState, TSTCustomFormatList;



__attribute__((visibility("hidden")))

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate>

{

    int _needsToCaptureViewState;

    id <TSADocumentRootDelegate> _delegate;

    NSMutableDictionary *_upgradeState;

    TSKViewState *_viewState;

    NSMutableSet *_warnings;

    NSString *_creationLanguage;

    unsigned long long _creationLanguageWritingDirection;

    TSCECalculationEngine *_calculationEngine;

    TSAFunctionBrowserState *_functionBrowserState;

    TSTCustomFormatList *_tablesCustomFormatList;

    _Bool _needsMovieCompatibilityUpgrade;

    NSString *_templateIdentifier;

    _Bool _hasPreUFFVersion;

    NSArray *buildVersionHistory;

}



+ (id)buildVersionHistoryPath;

+ (id)buildVersionHistoryPathPreUFF;

+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;

+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2;

+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;

+ (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;

+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;

+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;

+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;

+ (id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2;

+ (id)supportedPreviewImageExtensions;

+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(_Bool)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(id)arg7;

+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;

+ (_Bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;

- (long long)addObserverForICloudTeardownWithBlock:(id)arg1;

- (void)addWarning:(id)arg1;

- (id)additionalDocumentPropertiesForWrite;

- (void)blockForRecalcWithTimeout:(double)arg1;

@property(copy, nonatomic) NSArray *buildVersionHistory; // @synthesize buildVersionHistory;

- (id)calculationEngine;

- (id)captureViewState;

- (void)captureViewStateIfNeeded;

- (void)changeDocumentCacheFileProtection:(id)arg1;

- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;

- (id)createViewStateRoot;

- (id)creationLanguage;

- (id)customFormatList;

- (id)dataFromDocumentCachePath:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSString *defaultDraftName;

@property(nonatomic) id <TSADocumentRootDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didEnterBackground;

- (void)didSaveWithEncryptionChange;

- (id)documentCachePath;

- (void)documentDidLoad;

- (void)documentDidSave;

- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id *)arg4;

- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;

- (void)fulfillPasteboardPromises;

- (id)functionBrowserState;

- (_Bool)hasICloudConflict;

@property(nonatomic) _Bool hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;

- (void)importerDidFinish:(id)arg1;

- (id)init;

- (id)initWithContext:(id)arg1;

- (void)initializeForImport;

- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(_Bool)arg2;

- (void)invalidateViewState;

@property(readonly, nonatomic, getter=isDocumentEditedSinceLastSave) _Bool documentEditedSinceLastSave;

- (_Bool)isMultiPageForQuickLook;

- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) NSSet *missingFontWarningMessages;

@property(readonly, nonatomic) NSString *name;

- (id)namedTextStyles;

@property(nonatomic) _Bool needsMovieCompatibilityUpgrade;

- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;

- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;

- (void)pUpgradeHyperlinks;

- (void)pUpgradeHyperlinksInStorage:(id)arg1;

- (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3;

- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned long long *)arg3;

- (void)p_registerAllFormulasAfterImport;

- (void)p_removeStyles:(id)arg1;

- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;

- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;

- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;

- (void)p_updateCreationLanguage;

- (id)packageDataForWrite;

- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;

- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;

- (void)prepareForSavingAsTemplate;

- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;

- (void)prepareToGeneratePreview;

- (id)previewImage;

- (id)previewImageForSize:(struct CGSize)arg1;

- (id)protected_defaultTextPresetOrdering;

- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(_Bool)arg1;

- (id)referencedStylesOfClass:(Class)arg1;

- (void)removeWarning:(id)arg1;

- (void)resumeBackgroundActivities;

- (void)resumeThumbnailing;

- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;

- (void)setCalculationEngine:(id)arg1;

- (void)setCreationLanguage:(id)arg1;

- (void)setCustomFormatList:(id)arg1;

- (void)setFunctionBrowserState:(id)arg1;

@property(copy, nonatomic) NSString *templateIdentifier;

- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;

- (void)stashUpgradeState:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;

- (void)suspendBackgroundActivities;

- (void)suspendThumbnailing;

- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;

- (void)updateViewStateWithRoot:(id)arg1;

- (void)updateWritingDirection:(unsigned long long)arg1;

- (id)upgradeState;

- (void)upgradeTextStylesForUnity;

@property(readonly, nonatomic) TSKViewState *viewState;

- (id)warnings;

- (void)willClose;

- (void)willEnterForeground;

- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;

- (unsigned long long)writingDirection;



// Remaining properties

@property(readonly, nonatomic) _Bool importingDesignDemoDoc;

@property(readonly, nonatomic) _Bool isBrowsingVersions;



@end


