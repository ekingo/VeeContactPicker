//
//  VeeAddressBookForTestingConstants.h
//  VeeContactPicker
//
//  Created by Andrea Cipriani on 10/03/16.
//  Copyright © 2016 Code Atlas SRL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VeeAddressBookForTestingConstants : NSObject

extern NSString* const kVCFFileName;
extern NSString* const kVeeTestingContactsSignature;

#pragma mark - Testing contacts
extern NSInteger const kVeeTestingContactsNumber;
extern NSInteger const kVeeTestingContactsWithImage;
extern NSInteger const kVeeTestingContactsPhoneNumbersCount;
extern NSInteger const kVeeTestingContactsEmailsCount;

#pragma mark - Complete contact
extern NSString* const kCompleteVeeContactFirstName;
extern NSString* const kCompleteVeeContactMiddleName;
extern NSString* const kCompleteVeeContactLastName;
extern NSString* const kCompleteVeeContactNickname;
extern NSString* const kCompleteVeeContactOrganizationName;
extern NSString* const kCompleteVeeContactCompositeName;
extern NSString* const kCompleteVeeContactDisplayName;
extern NSInteger const kCompleteVeeContactPhoneNumbersCount;
extern NSInteger const kCompleteVeeContactEmailsCount;

#pragma mark - Unified contact
extern NSString* const kUnifiedVeecontactFirstName;

@end
