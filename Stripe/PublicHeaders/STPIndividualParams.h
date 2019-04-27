//
//  STPIndividualParams.h
//  Stripe
//
//  Created by Daniel Jackson on 12/20/17.
//  Copyright © 2017 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STPFormEncodable.h"

@class STPAddress, STPVerificationParams;

NS_ASSUME_NONNULL_BEGIN

/**
 Stripe API parameters to define a Person. Things like their name, address, etc.

 All of the fields are optional.
 */
@interface STPIndividualParams: NSObject<STPFormEncodable>

/**
 The address parameter. For `STPPersonParams`, this is the address of the person.
 For the `STPLegalEntityParams` subclass, see also `personalAddress`.
 */
@property (nonatomic, strong, nullable) STPAddress *address;

/**
 The date of birth (dob) of this person.

 Must include `day`, `month`, and `year`, and only those fields are used.
 */
@property (nonatomic, copy, nullable) NSDateComponents *dateOfBirth;

/**
 The first name of this person.
 */
@property (nonatomic, copy, nullable) NSString *firstName;

/**
 The last name of this person.
 */
@property (nonatomic, copy, nullable) NSString *lastName;

/**
 The first name of this person.
 */
@property (nonatomic, copy, nullable) NSString *gender;

/**
 The first name of this person.
 */
@property (nonatomic, copy, nullable) NSString *ssnLast4;

/**
 The first name of this person.
 */
@property (nonatomic, copy, nullable) NSString *phone;

/**
 The first name of this person.
 */
@property (nonatomic, copy, nullable) NSString *idNumber;

/**
 Verification document for this person.
 */
@property (nonatomic, strong, nullable) STPVerificationParams *verification;

@end


/**
 Parameters for supported types of verification.
 */
@interface STPVerificationParams: NSObject<STPFormEncodable>

/**
 The file id for the uploaded verification document.
 */
@property (nonatomic, copy, nullable) NSString *document;

/**
 The file id for the uploaded verification document (back side).
 */
@property (nonatomic, copy, nullable) NSString *documentBack;

@end

NS_ASSUME_NONNULL_END
