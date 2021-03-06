/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFIMAPConnection, MFIMAPResponse;



@interface MFIMAPParseContext : NSObject

{

    MFIMAPConnection *_connection;

    MFIMAPResponse *_response;

    const char *_start;

    const char *_end;

    const char *_originalStart;

    const char *_originalEnd;

    const char *_lastLoggedChar;

    _Bool _invalid;

}



+ (_Bool)hadWarningOrError;

+ (void)resetWarningOrError;

- (id)connection;

- (id)copyAString;

- (id)copyArray;

- (struct __CFArray *)copyArrayAllowingNulls:(_Bool)arg1;

- (id)copyAtom;

- (id)copyDateTime;

- (id)copyLiteral;

- (id)copyLiteralString;

- (id)copyMessageSet;

- (id)copyNilOrString;

- (id)copyNumber;

- (id)copyQuotedString;

- (id)copyStringFrom:(const char *)arg1 to:(const char *)arg2 withCaseOption:(int)arg3;

- (void)dealloc;

- (void)emitError:(id)arg1;

- (void)emitWarning:(id)arg1;

- (const char *)end;

- (_Bool)getNumber:(unsigned long long *)arg1;

- (void)increment;

- (id)initWithConnection:(id)arg1 response:(id)arg2 start:(const char *)arg3 end:(const char *)arg4;

- (_Bool)isValid;

- (_Bool)literalWithResponseConsumer:(id)arg1 section:(id)arg2;

- (void)logReadChars;

- (unsigned char)lookAhead;

- (_Bool)match:(const char *)arg1;

- (_Bool)match:(const char *)arg1 upToSpecial:(const char *)arg2;

- (const char *)nextSeparator;

- (_Bool)parseSpace;

- (id)response;

- (void)setEnd:(const char *)arg1;

- (void)setStart:(const char *)arg1;

- (const char *)start;



@end


