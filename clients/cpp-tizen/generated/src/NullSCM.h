/*
 * NullSCM.h
 *
 * 
 */

#ifndef _NullSCM_H_
#define _NullSCM_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class NullSCM : public Object {
public:
	/*! \brief Constructor.
	 */
	NullSCM();
	NullSCM(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NullSCM();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClass();

	/*! \brief Set 
	 */
	void setClass(std::string  _class);

private:
	std::string _class;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NullSCM_H_ */
