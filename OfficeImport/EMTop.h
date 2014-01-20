/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMTop.h"


#import "OIProgressiveReaderDelegate.h"



@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;



__attribute__((visibility("hidden")))

@interface EMTop : CMTop <OIProgressiveReaderDelegate>

{

    CMArchiveManager *_archiver;

    EMState *_state;

    EMWorkbookMapper *_mapper;

    NSString *_inFileName;

    _Bool _xml;

}



+ (void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

+ (void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(_Bool)arg2 archiver:(id)arg3;

- (void)_streamWorkbook:(id)arg1;

- (void)dealloc;

- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

- (void)readFile:(id)arg1 orData:(id)arg2 withDataFileName:(id)arg3 xmlFlag:(_Bool)arg4 archiver:(id)arg5;

- (void)readFile:(id)arg1 xmlFlag:(_Bool)arg2 archiver:(id)arg3;

- (void)readerDidEndDocument:(id)arg1;

- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned int)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;

- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;



@end


