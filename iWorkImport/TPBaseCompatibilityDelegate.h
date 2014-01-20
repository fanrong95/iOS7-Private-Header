/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSKCompatibilityDelegate.h"



__attribute__((visibility("hidden")))

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

{

}



- (id)backwardsCompatibleTypeForType:(id)arg1;

- (id)epubExportCategories;

- (Class)exportOptionsControllerClass;

- (id)exportableTypes;

- (Class)exporterClassForType:(id)arg1 options:(id)arg2;

- (Class)importerClassForType:(id)arg1;

- (id)indexXmlFilename;

- (_Bool)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2;

- (_Bool)isSageDocumentType:(id)arg1;

- (_Bool)isTCMessageExceptionErrorDomain:(id)arg1;

- (id)needNewerVersionIndexXmlContentString;

- (id)nestedDocumentFilename;

- (id)newExportableDocumentTypesForFlag:(unsigned long long)arg1;

- (id)unsupportedExportMessageStringForType:(id)arg1;



@end


