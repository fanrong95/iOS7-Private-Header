/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


#import "CMMapperRoot.h"



@class CMArchiveManager, EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;



__attribute__((visibility("hidden")))

@interface EMWorkbookMapper : CMMapper <CMMapperRoot>

{

    unsigned long long mRealSheetCount;

    int mWidth;

    int mHeight;

    EDWorkbook *edWorkbook;

    NSMutableArray *mWorksheetUrls;

    NSMutableArray *mWorksheetNames;

    NSMutableArray *mWorksheetGuids;

    NSString *mResourceUrlPrefix;

    NSString *mResourceUrlProtocol;

    NSString *mStyleSheetGuid;

    CMArchiveManager *mArchiver;

    NSString *mFileName;

    unsigned int mSheetIndex;

    _Bool mIsFirstMappedSheet;

    _Bool mIsFrameset;

    OIXMLDocument *mXhtmlDoc;

    OIXMLElement *mBodyElement;

    OIXMLDocument *mTabBarDoc;

    NSString *mTabBarURL;

    NSMutableArray *mSheetURLs;

    double mTabPosition;

    unsigned long long mNumberOfMappedSheets;

    _Bool mHasPushedHeader;

    _Bool mHasPushedFirstSheet;

    _Bool mLoadingMessageVisible;

}



+ (id)baseDate;

+ (id)borderStyleCache;

+ (id)borderWidthCache;

+ (id)cssStyleCache;

+ (void)setBaseDate1904:(_Bool)arg1;

- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 andMapper:(id)arg4;

- (id)_frontPageByCopyingMainPage;

- (id)_mainPageBack;

- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;

- (id)archiver;

- (id)blipAtIndex:(unsigned int)arg1;

- (id)copySheetMapperWithEdSheet:(id)arg1;

- (void)dealloc;

- (id)documentTitle;

- (id)fileName;

- (void)finishMappingWithState:(id)arg1;

- (_Bool)hasMultipleSheets;

- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;

- (_Bool)isMultiPage;

- (void)mapBodyStyleAt:(id)arg1;

- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;

- (struct CGSize)pageSizeForDevice;

- (void)setFileName:(id)arg1;

- (void)startMappingWithState:(id)arg1;

- (id)styleMatrix;

- (id)workbook;



@end

