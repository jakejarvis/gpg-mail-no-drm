//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MFIMAPAccount, NSArray;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject
{
    NSArray *_urls;
    NSArray *_paths;
    MFIMAPAccount *_account;
}

@property(retain, nonatomic) MFIMAPAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
//- (void).cxx_destruct;

@end
