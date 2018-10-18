//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ABAddressBook, ABPerson, NSLayoutConstraint, SGRealtimeContact, _ABPersonView;

@interface SuggestedContactViewController : NSViewController
{
    ABPerson *_representedPerson;	// 104 = 0x68
    ABAddressBook *_addressBook;	// 112 = 0x70
    _ABPersonView *_personView;	// 120 = 0x78
    id <SuggestedContactPopoverControllerDelegate> _delegate;	// 128 = 0x80
    NSLayoutConstraint *_contentHeightConstraint;	// 136 = 0x88
    NSLayoutConstraint *_totalHeightConstraint;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingIsNewContact;	// IMP=0x00000001002d7953
+ (id)_addressDictionaryFromComponents:(id)arg1;	// IMP=0x00000001002d778d
@property(nonatomic) __weak NSLayoutConstraint *totalHeightConstraint; // @synthesize totalHeightConstraint=_totalHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(nonatomic) __weak id <SuggestedContactPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _ABPersonView *personView; // @synthesize personView=_personView;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) ABPerson *representedPerson; // @synthesize representedPerson=_representedPerson;
- (void).cxx_destruct;	// IMP=0x00000001002d7d75
- (void)updateContacts:(id)arg1;	// IMP=0x00000001002d7a08
- (void)dismissController:(id)arg1;	// IMP=0x00000001002d79bc
@property(readonly, nonatomic) BOOL isNewContact;
- (void)_populateRepresentedPerson:(id)arg1;	// IMP=0x00000001002d6d35
@property(retain) SGRealtimeContact *representedObject;
- (void)updateViewConstraints;	// IMP=0x00000001002d699a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002d68af
- (void)viewWillAppear;	// IMP=0x00000001002d6882
- (void)dealloc;	// IMP=0x00000001002d6810
- (void)viewDidLoad;	// IMP=0x00000001002d6687

@end
