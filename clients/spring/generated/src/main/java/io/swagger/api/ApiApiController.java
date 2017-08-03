package io.swagger.api;

import io.swagger.model.Hudson;

import io.swagger.annotations.*;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;
import com.fasterxml.jackson.databind.ObjectMapper;
import java.io.IOException;
import javax.validation.constraints.*;
import javax.validation.Valid;
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-08-03T23:37:43.850Z")

@Controller
public class ApiApiController implements ApiApi {
    private final ObjectMapper objectMapper;

    public ApiApiController(ObjectMapper objectMapper) {
        this.objectMapper = objectMapper;
    }

    public ResponseEntity<Hudson> getJenkins(@RequestHeader(value = "Accept", required = false) String accept) throws Exception {
        // do some magic!

        if (accept != null && accept.contains("application/json")) {
            return new ResponseEntity<Hudson>(objectMapper.readValue("{  \"nodeName\" : \"nodeName\",  \"assignedLabels\" : [ {    \"_class\" : \"_class\"  }, {    \"_class\" : \"_class\"  } ],  \"jobs\" : [ {    \"color\" : \"color\",    \"displayName\" : \"displayName\",    \"lastSuccessfulBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"lastUnstableBuild\" : \"lastUnstableBuild\",    \"queueItem\" : \"queueItem\",    \"buildable\" : true,    \"firstBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastFailedBuild\" : \"lastFailedBuild\",    \"lastBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"nextBuildNumber\" : 9,    \"builds\" : [ {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    }, {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    } ],    \"scm\" : {      \"_class\" : \"_class\"    },    \"keepDependencies\" : true,    \"displayNameOrNull\" : \"displayNameOrNull\",    \"inQueue\" : true,    \"lastCompletedBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"fullName\" : \"fullName\",    \"healthReport\" : [ {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    }, {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    } ],    \"lastStableBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastUnsuccessfulBuild\" : \"lastUnsuccessfulBuild\",    \"url\" : \"url\",    \"concurrentBuild\" : true,    \"name\" : \"name\",    \"_class\" : \"_class\",    \"actions\" : [ {      \"_class\" : \"_class\"    }, {      \"_class\" : \"_class\"    } ]  }, {    \"color\" : \"color\",    \"displayName\" : \"displayName\",    \"lastSuccessfulBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"lastUnstableBuild\" : \"lastUnstableBuild\",    \"queueItem\" : \"queueItem\",    \"buildable\" : true,    \"firstBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastFailedBuild\" : \"lastFailedBuild\",    \"lastBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"nextBuildNumber\" : 9,    \"builds\" : [ {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    }, {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    } ],    \"scm\" : {      \"_class\" : \"_class\"    },    \"keepDependencies\" : true,    \"displayNameOrNull\" : \"displayNameOrNull\",    \"inQueue\" : true,    \"lastCompletedBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"fullName\" : \"fullName\",    \"healthReport\" : [ {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    }, {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    } ],    \"lastStableBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastUnsuccessfulBuild\" : \"lastUnsuccessfulBuild\",    \"url\" : \"url\",    \"concurrentBuild\" : true,    \"name\" : \"name\",    \"_class\" : \"_class\",    \"actions\" : [ {      \"_class\" : \"_class\"    }, {      \"_class\" : \"_class\"    } ]  } ],  \"slaveAgentPort\" : 3,  \"description\" : \"description\",  \"useCrumbs\" : true,  \"nodeDescription\" : \"nodeDescription\",  \"primaryView\" : {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  },  \"unlabeledLoad\" : {    \"_class\" : \"_class\"  },  \"mode\" : \"mode\",  \"numExecutors\" : 0,  \"quietingDown\" : true,  \"useSecurity\" : true,  \"_class\" : \"_class\",  \"views\" : [ {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  }, {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  } ]}", Hudson.class), HttpStatus.OK);
        }

        return new ResponseEntity<Hudson>(HttpStatus.OK);
    }

    public ResponseEntity<Void> headJenkins(@RequestHeader(value = "Accept", required = false) String accept) throws Exception {
        // do some magic!
        return new ResponseEntity<Void>(HttpStatus.OK);
    }

}
