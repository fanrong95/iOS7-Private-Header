/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TNRenderingExporter.h"


#import "TSKImageExporter.h"



__attribute__((visibility("hidden")))

@interface TNPreviewExporter : TNRenderingExporter <TSKImageExporter>

{

}



@property(nonatomic) unsigned long long height;

- (id)initWithDocumentRoot:(id)arg1;

- (id)p_renderingExporterDelegate;

@property(nonatomic) _Bool scaleToFit;

@property(nonatomic) unsigned long long width;



@end


