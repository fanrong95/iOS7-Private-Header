/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQHXMLOutput.h"



__attribute__((visibility("hidden")))

@interface GQHStreamedXML : NSObject <GQHXMLOutput>

{

    struct _xmlOutputBuffer {

        void *_field1;

        void *_field2;

        void *_field3;

        struct _xmlCharEncodingHandler *_field4;

        struct _xmlBuf *_field5;

        struct _xmlBuf *_field6;

        int _field7;

        int _field8;

    } *mOutputBuffer;

    struct __CFData *mData;

    struct __CFArray *mElementNameStack;

    int mLastOp;

    _Bool mNeedNewlineBeforeNextElement;

    struct _xmlDoc *mXMLDoc;

}



- (void)addCharRef:(const char *)arg1;

- (void)addXmlCharContent:(const char *)arg1;

- (struct __CFData *)createHtml;

- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;

- (struct __CFData *)createProgressiveHtml;

- (void)dealloc;

- (void)endElement;

- (void)endElementWithExpectedName:(const char *)arg1;

- (id)initEmpty;

- (id)initWithHead;

- (const char *)peekElementName;

- (char *)popElementName;

- (void)pushElementName:(const char *)arg1;

- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;

- (void)startElement:(const char *)arg1;



@end


