//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCProgressEntry.h>

@interface MCByteStatusProgressEntry : MCProgressEntry
{
    long long _totalBytes;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingStatusText;	// IMP=0x00000000000170b2
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (void)refreshValues;	// IMP=0x00000000000171ec
- (id)observedProgressKeyPaths;	// IMP=0x0000000000017144
- (BOOL)indeterminate;	// IMP=0x000000000001713c
- (id)statusText;	// IMP=0x00000000000170d2

@end

