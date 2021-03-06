//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MCProgressEntry, NSProgressIndicator, NSString, NSTextField;

@interface ProgressViewController : NSViewController
{
    NSProgressIndicator *_progressIndicator;	// 104 = 0x68
    NSTextField *_secondaryTextField;	// 112 = 0x70
}

+ (id)keyPathsForValuesAffectingSecondaryText;	// IMP=0x000000010027dc9c
+ (id)keyPathsForValuesAffectingShouldShowOverrideButton;	// IMP=0x000000010027dc0f
@property(retain, nonatomic) NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;	// IMP=0x000000010027de01
@property(readonly, copy, nonatomic) NSString *secondaryText;
@property(readonly, nonatomic) BOOL shouldShowOverrideButton;
- (void)_transitionToEntry:(id)arg1;	// IMP=0x000000010027da09
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010027d7e5
@property(retain) MCProgressEntry *representedObject;
- (void)viewDidLoad;	// IMP=0x000000010027d49f
- (void)awakeFromNib;	// IMP=0x000000010027d3b9
- (void)dealloc;	// IMP=0x000000010027d2ee
- (void)_progressViewControllerCommonInit;	// IMP=0x000000010027d254
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010027d20f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010027d19d

@end

